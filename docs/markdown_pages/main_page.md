@mainpage Test

__Introduction__

\htmlonly

<script type="module" src="https://unpkg.com/@google/model-viewer/dist/model-viewer.min.js"></script>

<model-viewer src="model.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls poster="poster_monkey.png" shadow-intensity="1" environment-image="spruit_sunrise_1k_HDR.hdr" min-camera-orbit="auto 20deg auto" max-camera-orbit="auto 90deg auto" style="width:100%;height:800px;">
    <div class="progress-bar hide" slot="progress-bar">
        <div class="update-bar"></div>
    </div>

    <div id="ar-prompt">
        <img src="https://modelviewer.dev/shared-assets/icons/hand.png">
    </div>
</model-viewer>


\endhtmlonly
